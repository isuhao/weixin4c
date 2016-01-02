/* It had generated by DirectStruct v1.6.1 */
#include "IDL_xml.dsc.h"

int DSCINIT_xml( xml *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(xml) );
	return 0;
}

#include "fasterxml.h"

int DSCSERIALIZE_XML_xml( xml *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"<?xml version=\"1.0\" encoding=\"%s\"?>\n",encoding); if(len<0)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<xml>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<ToUserName>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ToUserName); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</ToUserName>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<FromUserName>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->FromUserName); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</FromUserName>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<CreateTime>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->CreateTime); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</CreateTime>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<MsgType>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->MsgType); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</MsgType>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Content>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Content); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Content>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<MsgId>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->MsgId); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</MsgId>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</xml>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	(*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnXmlNode CallbackOnXmlNode_xml ;
int CallbackOnXmlNode_xml( int type , char *xpath , int xpath_len , int xpath_size , char *node , int node_len , char *properties , int properties_len , char *content , int content_len , void *p )
{
	xml	*pst = (xml*)p ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	
	if( type & FASTERXML_NODE_BRANCH )
	{
		if( type & FASTERXML_NODE_ENTER )
		{
		}
		else if( type & FASTERXML_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERXML_NODE_LEAF )
	{
		/* ToUserName */
		if( xpath_len == 15 && strncmp( xpath , "/xml/ToUserName" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->ToUserName);
		{if( content_len > sizeof(pst->ToUserName)-1 ) return -7;}}
		/* FromUserName */
		if( xpath_len == 17 && strncmp( xpath , "/xml/FromUserName" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->FromUserName);
		{if( content_len > sizeof(pst->FromUserName)-1 ) return -7;}}
		/* CreateTime */
		if( xpath_len == 15 && strncmp( xpath , "/xml/CreateTime" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->CreateTime);
		{if( content_len > sizeof(pst->CreateTime)-1 ) return -7;}}
		/* MsgType */
		if( xpath_len == 12 && strncmp( xpath , "/xml/MsgType" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->MsgType);
		{if( content_len > sizeof(pst->MsgType)-1 ) return -7;}}
		/* Content */
		if( xpath_len == 12 && strncmp( xpath , "/xml/Content" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Content);
		{if( content_len > sizeof(pst->Content)-1 ) return -7;}}
		/* MsgId */
		if( xpath_len == 10 && strncmp( xpath , "/xml/MsgId" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->MsgId);
		{if( content_len > sizeof(pst->MsgId)-1 ) return -7;}}
	}
	
	return 0;
}

int DSCDESERIALIZE_XML_xml( char *encoding , char *buf , int *p_len , xml *pst )
{
	char	xpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( xpath , 0x00 , sizeof(xpath) );
	nret = TravelXmlBuffer( buf , xpath , sizeof(xpath) , & CallbackOnXmlNode_xml , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
