/*********************************************************************************
  * @�ļ����� :gps_disk_io.c
  * @�������� :���в�����صĺ���������������Ķ�ȡ���޸ģ���
  * @��	   �� :������
  * @�������� :2015-6-08
  * @�ļ��汾 :0.01
  *---------------------------------------------------------------------------------
  * @�޸���		�޸�ʱ��   	�޸�����
  * ������		2015-06-08	����
*********************************************************************************/
	
#include "gps_typedef.h"


#ifndef _H_JT808_PARAM_
#define _H_JT808_PARAM_


#define TYPE_BYTE	1                /*�̶�Ϊ1�ֽ�,С�˶���*/
#define TYPE_WORD	2                /*�̶�Ϊ2�ֽ�,С�˶���*/
#define TYPE_DWORD	4                /*�̶�Ϊ4�ֽ�,С�˶���*/
#define TYPE_CAN	8                /*�̶�Ϊ8�ֽ�,��ǰ�洢CAN_ID����*/
#define TYPE_STR	32               /*�̶�Ϊ32�ֽ�,����˳��*/
#define TYPE_L(n)	n


#define CENTER_SERVICE_IP1		"60.28.50.210"
#define CENTER_SERVICE_PORT1	9131
#define CENTER_SERVICE_IP2		"60.28.50.210"
#define CENTER_SERVICE_PORT2	9131
#define PROVINCE_ID				12						///ʡ��ID
#define CITY_ID					100						///����ID


#define BYTESWAP2( val )    \
    ( ( ( ( val ) & 0xff ) << 8 ) |   \
      ( ( ( val ) & 0xff00 ) >> 8 ) )

#define BYTESWAP4( val )    \
    ( ( ( ( val ) & 0xff ) << 24 ) |   \
      ( ( ( val ) & 0xff00 ) << 8 ) |  \
      ( ( ( val ) & 0xff0000 ) >> 8 ) |  \
      ( ( ( val ) & 0xff000000 ) >> 24 ) )

////////////////////////////////////////////////////////////////�������Ͷ��忪ʼ


typedef struct _jt808_param
{
	char		id_0x0000[16];   /*0x0000 �汾*/
	uint32_t	id_0x0001;      /*0x0001 �������ͼ��*/
	uint32_t	id_0x0002;      /*0x0002 TCPӦ��ʱʱ��*/
	uint32_t	id_0x0003;      /*0x0003 TCP��ʱ�ش�����*/
	uint32_t	id_0x0004;      /*0x0004 UDPӦ��ʱʱ��*/
	uint32_t	id_0x0005;      /*0x0005 UDP��ʱ�ش�����*/
	uint32_t	id_0x0006;      /*0x0006 SMS��ϢӦ��ʱʱ��*/
	uint32_t	id_0x0007;      /*0x0007 SMS��Ϣ�ش�����*/
	char		id_0x0010[32];  /*0x0010 ��������APN*/
	char		id_0x0011[32];  /*0x0011 �û���*/
	char		id_0x0012[32];  /*0x0012 ����*/
	char		id_0x0013[64];  /*0x0013 ����������ַ*/
	char		id_0x0014[32];  /*0x0014 ����APN*/
	char		id_0x0015[32];  /*0x0015 �����û���*/
	char		id_0x0016[32];  /*0x0016 ��������*/
	char		id_0x0017[64];  /*0x0017 ���ݷ�������ַ��ip������*/
	uint32_t	id_0x0018;      /*0x0018 TCP�˿�*/
	uint32_t	id_0x0019;      /*0x0019 UDP�˿�*/
	char		id_0x001A[32];  /*0x001A ic������������ַ��ip������*/
	uint32_t	id_0x001B;      /*0x001B ic��������TCP�˿�*/
	uint32_t	id_0x001C;      /*0x001C ic��������UDP�˿�*/
	char		id_0x001D[32];  /*0x001D ic�����ݷ�������ַ��ip������*/
	uint32_t	id_0x0020;      /*0x0020 λ�û㱨����*/
	uint32_t	id_0x0021;      /*0x0021 λ�û㱨����*/
	uint32_t	id_0x0022;      /*0x0022 ��ʻԱδ��¼�㱨ʱ����*/
	uint32_t	id_0x0027;      /*0x0027 ����ʱ�㱨ʱ����*/
	uint32_t	id_0x0028;      /*0x0028 ��������ʱ�㱨ʱ����*/
	uint32_t	id_0x0029;      /*0x0029 ȱʡʱ��㱨���*/
	uint32_t	id_0x002C;      /*0x002c ȱʡ����㱨���*/
	uint32_t	id_0x002D;      /*0x002d ��ʻԱδ��¼�㱨������*/
	uint32_t	id_0x002E;      /*0x002e ����ʱ����㱨���*/
	uint32_t	id_0x002F;      /*0x002f ����ʱ����㱨���*/
	uint32_t	id_0x0030;      /*0x0030 �յ㲹���Ƕ�*/
	uint32_t	id_0x0031;      /*0x0031 ����Χ���뾶���Ƿ�λ����ֵ������λΪ��*/
	char		id_0x0040[32];  /*0x0040 ���ƽ̨�绰����*/
	char		id_0x0041[32];  /*0x0041 ��λ�绰����*/
	char		id_0x0042[32];  /*0x0042 �ָ��������õ绰����*/
	char		id_0x0043[32];  /*0x0043 ���ƽ̨SMS����*/
	char		id_0x0044[32];  /*0x0044 �����ն�SMS�ı���������*/
	uint32_t	id_0x0045;      /*0x0045 �ն˽����绰����*/
	uint32_t	id_0x0046;      /*0x0046 ÿ��ͨ��ʱ��*/
	uint32_t	id_0x0047;      /*0x0047 ����ͨ��ʱ��*/
	char		id_0x0048[32];  /*0x0048 �����绰����*/
	char		id_0x0049[32];  /*0x0049 ���ƽ̨��Ȩ���ź���*/
	uint32_t	id_0x0050;      /*0x0050 ����������*/
	uint32_t	id_0x0051;      /*0x0051 ���������ı�SMS����*/
	uint32_t	id_0x0052;      /*0x0052 �������տ���*/
	uint32_t	id_0x0053;      /*0x0053 ��������洢��־*/
	uint32_t	id_0x0054;      /*0x0054 �ؼ���־*/
	uint32_t	id_0x0055;      /*0x0055 ����ٶ�kmh*/
	uint32_t	id_0x0056;      /*0x0056 ���ٳ���ʱ��*/
	uint32_t	id_0x0057;      /*0x0057 ������ʻʱ������*/
	uint32_t	id_0x0058;      /*0x0058 �����ۼƼ�ʻʱ������*/
	uint32_t	id_0x0059;      /*0x0059 ��С��Ϣʱ��*/
	uint32_t	id_0x005A;      /*0x005A �ͣ��ʱ��*/
	uint32_t	id_0x005B;      /*0x005B ���ٱ���Ԥ����ֵ����λΪ 1/10Km/h */
	uint32_t	id_0x005C;      /*0x005C ƣ�ͼ�ʻԤ����ֵ����λΪ�루s����>0*/
	uint32_t	id_0x005D;      /*0x005D ��ײ������������:b7..0����ײʱ��(4ms) b15..8����ײ���ٶ�(0.1g) 0-79 ֮�䣬Ĭ��Ϊ10 */
	uint32_t	id_0x005E;      /*0x005E �෭�����������ã� �෭�Ƕȣ���λ 1 �ȣ�Ĭ��Ϊ 30 ��*/
	uint32_t	id_0x0064;      /*0x0064 ��ʱ���տ���*/
	uint32_t	id_0x0065;      /*0x0065 �������տ���*/
	uint32_t	id_0x0070;      /*0x0070 ͼ����Ƶ����(1-10)*/
	uint32_t	id_0x0071;      /*0x0071 ����*/
	uint32_t	id_0x0072;      /*0x0072 �Աȶ�*/
	uint32_t	id_0x0073;      /*0x0073 ���Ͷ�*/
	uint32_t	id_0x0074;      /*0x0074 ɫ��*/
	uint32_t	id_0x0080;      /*0x0080 ������̱�����0.1km*/
	uint32_t	id_0x0081;      /*0x0081 ʡ��ID*/
	uint32_t	id_0x0082;      /*0x0082 ����ID*/
	char		id_0x0083[32];  /*0x0083 ����������*/
	uint32_t	id_0x0084;      /*0x0084 ������ɫ  0 δ���� 1��ɫ 2��ɫ 3��ɫ 4��ɫ 9����*/
	uint32_t	id_0x0090;      /*0x0090 GNSS ��λģʽ*/
	uint32_t	id_0x0091;      /*0x0091 GNSS ������*/
	uint32_t	id_0x0092;      /*0x0092 GNSS ģ����ϸ��λ�������Ƶ��*/
	uint32_t	id_0x0093;      /*0x0093 GNSS ģ����ϸ��λ���ݲɼ�Ƶ��*/
	uint32_t	id_0x0094;      /*0x0094 GNSS ģ����ϸ��λ�����ϴ���ʽ*/
	uint32_t	id_0x0095;      /*0x0095 GNSS ģ����ϸ��λ�����ϴ�����*/
	uint32_t	id_0x0100;      /*0x0100 CAN ����ͨ�� 1 �ɼ�ʱ����(ms)��0 ��ʾ���ɼ�*/
	uint32_t	id_0x0101;      /*0x0101 CAN ����ͨ�� 1 �ϴ�ʱ����(s)��0 ��ʾ���ϴ�*/
	uint32_t	id_0x0102;      /*0x0102 CAN ����ͨ�� 2 �ɼ�ʱ����(ms)��0 ��ʾ���ɼ�*/
	uint32_t	id_0x0103;      /*0x0103 CAN ����ͨ�� 2 �ϴ�ʱ����(s)��0 ��ʾ���ϴ�*/
	uint8_t		id_0x0110[8];   /*0x0110 CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0111[8];   /*0x0111 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0112[8];   /*0x0112 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0113[8];   /*0x0113 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0114[8];   /*0x0114 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0115[8];   /*0x0115 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0116[8];   /*0x0116 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0117[8];   /*0x0117 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0118[8];   /*0x0118 ����CAN ���� ID �����ɼ�����*/
	uint8_t		id_0x0119[8];   /*0x0119 ����CAN ���� ID �����ɼ�����*/
	
	/*����8103Ĭ�ϲ������������*/
	char		id_0xF000[32];	/*0xF000 ������ID 5byte*/
	char		id_0xF001[32];	/*0xF001 �ն��ͺ� 20byte*/
	char		id_0xF002[32];	/*0xF002 �ն�ID 7byte*/
	char		id_0xF003[32];	/*0xF003 ��Ȩ��*/
	uint16_t	id_0xF004;		/*0xF004 �ն�����*/
	char		id_0xF005[32];	/*0xF005 VIN*/
	char		id_0xF006[32];	/*0xF006 CARID �ϱ����ն��ֻ��ţ�ϵͳԭ����mobile */
}GPS_PARAM;


typedef struct _st_vdr_param
{
	char		id_0x0000[16];  /*0x0000 �汾*/
	uint32_t	id_0x0001;      /*0x0001 VDR ����1*/
	uint32_t	id_0x0002;      /*0x0001 VDR ����2*/
	uint32_t	id_0x0003;      /*0x0001 VDR ����3*/
	uint32_t	id_0x0004;      /*0x0001 VDR ����4*/
	uint32_t	id_0x0005;      /*0x0001 VDR ����5*/
	char		id_0x0006[32];   /*0x0001 VDR ����6*/
}st_vdr_param;


extern GPS_PARAM 		gps_param;
extern st_vdr_param	gt_vdr_param;


void param_read(void);
void param_out_ex(char * section, char * id );
void param_out(char * id);
int param_set_ex(char * section, char * id,char * value);
int param_set(char * id,char * value);
int param_save_ex(char * section);
int param_save(void);
int param_load(void);
int param_proc(void);


#endif