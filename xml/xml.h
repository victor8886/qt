// +build !minimal

#pragma once

#ifndef GO_QTXML_H
#define GO_QTXML_H

#include <stdint.h>

#ifdef __cplusplus
int QXmlAttributes_QXmlAttributes_QRegisterMetaType();
int QXmlContentHandler_QXmlContentHandler_QRegisterMetaType();
int QXmlDTDHandler_QXmlDTDHandler_QRegisterMetaType();
int QXmlDeclHandler_QXmlDeclHandler_QRegisterMetaType();
int QXmlDefaultHandler_QXmlDefaultHandler_QRegisterMetaType();
int QXmlEntityResolver_QXmlEntityResolver_QRegisterMetaType();
int QXmlErrorHandler_QXmlErrorHandler_QRegisterMetaType();
int QXmlInputSource_QXmlInputSource_QRegisterMetaType();
int QXmlLexicalHandler_QXmlLexicalHandler_QRegisterMetaType();
int QXmlLocator_QXmlLocator_QRegisterMetaType();
int QXmlReader_QXmlReader_QRegisterMetaType();
int QXmlSimpleReader_QXmlSimpleReader_QRegisterMetaType();
extern "C" {
#endif

struct QtXml_PackedString { char* data; long long len; void* ptr; };
struct QtXml_PackedList { void* data; long long len; };
void* QDomAttr_NewQDomAttr();
void* QDomAttr_NewQDomAttr2(void* x);
struct QtXml_PackedString QDomAttr_Name(void* ptr);
void* QDomAttr_OwnerElement(void* ptr);
void QDomAttr_SetValue(void* ptr, struct QtXml_PackedString v);
char QDomAttr_Specified(void* ptr);
struct QtXml_PackedString QDomAttr_Value(void* ptr);
void* QDomCDATASection_NewQDomCDATASection();
void* QDomCDATASection_NewQDomCDATASection2(void* x);
void* QDomCharacterData_NewQDomCharacterData();
void* QDomCharacterData_NewQDomCharacterData2(void* x);
void QDomCharacterData_AppendData(void* ptr, struct QtXml_PackedString arg);
struct QtXml_PackedString QDomCharacterData_Data(void* ptr);
void QDomCharacterData_DeleteData(void* ptr, unsigned long offset, unsigned long count);
void QDomCharacterData_InsertData(void* ptr, unsigned long offset, struct QtXml_PackedString arg);
int QDomCharacterData_Length(void* ptr);
void QDomCharacterData_ReplaceData(void* ptr, unsigned long offset, unsigned long count, struct QtXml_PackedString arg);
void QDomCharacterData_SetData(void* ptr, struct QtXml_PackedString v);
struct QtXml_PackedString QDomCharacterData_SubstringData(void* ptr, unsigned long offset, unsigned long count);
void* QDomComment_NewQDomComment();
void* QDomComment_NewQDomComment2(void* x);
void* QDomDocument_NewQDomDocument();
void* QDomDocument_NewQDomDocument2(struct QtXml_PackedString name);
void* QDomDocument_NewQDomDocument3(void* doctype);
void* QDomDocument_NewQDomDocument4(void* x);
void* QDomDocument_CreateAttribute(void* ptr, struct QtXml_PackedString name);
void* QDomDocument_CreateAttributeNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName);
void* QDomDocument_CreateCDATASection(void* ptr, struct QtXml_PackedString value);
void* QDomDocument_CreateComment(void* ptr, struct QtXml_PackedString value);
void* QDomDocument_CreateDocumentFragment(void* ptr);
void* QDomDocument_CreateElement(void* ptr, struct QtXml_PackedString tagName);
void* QDomDocument_CreateElementNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName);
void* QDomDocument_CreateEntityReference(void* ptr, struct QtXml_PackedString name);
void* QDomDocument_CreateProcessingInstruction(void* ptr, struct QtXml_PackedString target, struct QtXml_PackedString data);
void* QDomDocument_CreateTextNode(void* ptr, struct QtXml_PackedString value);
void* QDomDocument_Doctype(void* ptr);
void* QDomDocument_DocumentElement(void* ptr);
void* QDomDocument_ElementById(void* ptr, struct QtXml_PackedString elementId);
void* QDomDocument_ElementsByTagName(void* ptr, struct QtXml_PackedString tagname);
void* QDomDocument_ElementsByTagNameNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
void* QDomDocument_Implementation(void* ptr);
void* QDomDocument_ImportNode(void* ptr, void* importedNode, char deep);
char QDomDocument_SetContent(void* ptr, void* data, char namespaceProcessing, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent2(void* ptr, struct QtXml_PackedString text, char namespaceProcessing, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent3(void* ptr, void* dev, char namespaceProcessing, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent4(void* ptr, void* source, char namespaceProcessing, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent5(void* ptr, void* buffer, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent6(void* ptr, struct QtXml_PackedString text, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent7(void* ptr, void* dev, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
char QDomDocument_SetContent8(void* ptr, void* source, void* reader, struct QtXml_PackedString errorMsg, int errorLine, int errorColumn);
void* QDomDocument_ToByteArray(void* ptr, int indent);
struct QtXml_PackedString QDomDocument_ToString(void* ptr, int indent);
void QDomDocument_DestroyQDomDocument(void* ptr);
void* QDomDocumentFragment_NewQDomDocumentFragment();
void* QDomDocumentFragment_NewQDomDocumentFragment2(void* x);
void* QDomDocumentType_NewQDomDocumentType();
void* QDomDocumentType_NewQDomDocumentType2(void* n);
void* QDomDocumentType_Entities(void* ptr);
struct QtXml_PackedString QDomDocumentType_InternalSubset(void* ptr);
struct QtXml_PackedString QDomDocumentType_Name(void* ptr);
void* QDomDocumentType_Notations(void* ptr);
struct QtXml_PackedString QDomDocumentType_PublicId(void* ptr);
struct QtXml_PackedString QDomDocumentType_SystemId(void* ptr);
void* QDomElement_NewQDomElement();
void* QDomElement_NewQDomElement2(void* x);
struct QtXml_PackedString QDomElement_Attribute(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString defValue);
struct QtXml_PackedString QDomElement_AttributeNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName, struct QtXml_PackedString defValue);
void* QDomElement_AttributeNode(void* ptr, struct QtXml_PackedString name);
void* QDomElement_AttributeNodeNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
void* QDomElement_ElementsByTagName(void* ptr, struct QtXml_PackedString tagname);
void* QDomElement_ElementsByTagNameNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
char QDomElement_HasAttribute(void* ptr, struct QtXml_PackedString name);
char QDomElement_HasAttributeNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
void QDomElement_RemoveAttribute(void* ptr, struct QtXml_PackedString name);
void QDomElement_RemoveAttributeNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
void* QDomElement_RemoveAttributeNode(void* ptr, void* oldAttr);
void QDomElement_SetAttribute(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString value);
void QDomElement_SetAttribute2(void* ptr, struct QtXml_PackedString name, long long value);
void QDomElement_SetAttribute3(void* ptr, struct QtXml_PackedString name, unsigned long long value);
void QDomElement_SetAttribute4(void* ptr, struct QtXml_PackedString name, int value);
void QDomElement_SetAttribute5(void* ptr, struct QtXml_PackedString name, unsigned int value);
void QDomElement_SetAttribute6(void* ptr, struct QtXml_PackedString name, float value);
void QDomElement_SetAttribute7(void* ptr, struct QtXml_PackedString name, double value);
void QDomElement_SetAttributeNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, struct QtXml_PackedString value);
void QDomElement_SetAttributeNS2(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, int value);
void QDomElement_SetAttributeNS3(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, unsigned int value);
void QDomElement_SetAttributeNS4(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, long long value);
void QDomElement_SetAttributeNS5(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, unsigned long long value);
void QDomElement_SetAttributeNS6(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, double value);
void* QDomElement_SetAttributeNode(void* ptr, void* newAttr);
void* QDomElement_SetAttributeNodeNS(void* ptr, void* newAttr);
void QDomElement_SetTagName(void* ptr, struct QtXml_PackedString name);
struct QtXml_PackedString QDomElement_TagName(void* ptr);
struct QtXml_PackedString QDomElement_Text(void* ptr);
void* QDomEntity_NewQDomEntity();
void* QDomEntity_NewQDomEntity2(void* x);
struct QtXml_PackedString QDomEntity_NotationName(void* ptr);
struct QtXml_PackedString QDomEntity_PublicId(void* ptr);
struct QtXml_PackedString QDomEntity_SystemId(void* ptr);
void* QDomEntityReference_NewQDomEntityReference();
void* QDomEntityReference_NewQDomEntityReference2(void* x);
void* QDomImplementation_NewQDomImplementation();
void* QDomImplementation_NewQDomImplementation2(void* x);
void* QDomImplementation_CreateDocument(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString qName, void* doctype);
void* QDomImplementation_CreateDocumentType(void* ptr, struct QtXml_PackedString qName, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QDomImplementation_HasFeature(void* ptr, struct QtXml_PackedString feature, struct QtXml_PackedString version);
long long QDomImplementation_QDomImplementation_InvalidDataPolicy();
char QDomImplementation_IsNull(void* ptr);
void QDomImplementation_QDomImplementation_SetInvalidDataPolicy(long long policy);
void QDomImplementation_DestroyQDomImplementation(void* ptr);
void* QDomNamedNodeMap_NewQDomNamedNodeMap();
void* QDomNamedNodeMap_NewQDomNamedNodeMap2(void* n);
char QDomNamedNodeMap_Contains(void* ptr, struct QtXml_PackedString name);
int QDomNamedNodeMap_Count(void* ptr);
char QDomNamedNodeMap_IsEmpty(void* ptr);
void* QDomNamedNodeMap_Item(void* ptr, int index);
int QDomNamedNodeMap_Length(void* ptr);
void* QDomNamedNodeMap_NamedItem(void* ptr, struct QtXml_PackedString name);
void* QDomNamedNodeMap_NamedItemNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
void* QDomNamedNodeMap_RemoveNamedItem(void* ptr, struct QtXml_PackedString name);
void* QDomNamedNodeMap_RemoveNamedItemNS(void* ptr, struct QtXml_PackedString nsURI, struct QtXml_PackedString localName);
void* QDomNamedNodeMap_SetNamedItem(void* ptr, void* newNode);
void* QDomNamedNodeMap_SetNamedItemNS(void* ptr, void* newNode);
int QDomNamedNodeMap_Size(void* ptr);
void QDomNamedNodeMap_DestroyQDomNamedNodeMap(void* ptr);
void* QDomNode_NewQDomNode();
void* QDomNode_NewQDomNode2(void* n);
void* QDomNode_AppendChild(void* ptr, void* newChild);
void* QDomNode_ChildNodes(void* ptr);
void QDomNode_Clear(void* ptr);
void* QDomNode_CloneNode(void* ptr, char deep);
int QDomNode_ColumnNumber(void* ptr);
void* QDomNode_FirstChild(void* ptr);
void* QDomNode_FirstChildElement(void* ptr, struct QtXml_PackedString tagName);
char QDomNode_HasAttributes(void* ptr);
char QDomNode_HasChildNodes(void* ptr);
void* QDomNode_InsertAfter(void* ptr, void* newChild, void* refChild);
void* QDomNode_InsertBefore(void* ptr, void* newChild, void* refChild);
char QDomNode_IsAttr(void* ptr);
char QDomNode_IsCDATASection(void* ptr);
char QDomNode_IsCharacterData(void* ptr);
char QDomNode_IsComment(void* ptr);
char QDomNode_IsDocument(void* ptr);
char QDomNode_IsDocumentFragment(void* ptr);
char QDomNode_IsDocumentType(void* ptr);
char QDomNode_IsElement(void* ptr);
char QDomNode_IsEntity(void* ptr);
char QDomNode_IsEntityReference(void* ptr);
char QDomNode_IsNotation(void* ptr);
char QDomNode_IsNull(void* ptr);
char QDomNode_IsProcessingInstruction(void* ptr);
char QDomNode_IsSupported(void* ptr, struct QtXml_PackedString feature, struct QtXml_PackedString version);
char QDomNode_IsText(void* ptr);
void* QDomNode_LastChild(void* ptr);
void* QDomNode_LastChildElement(void* ptr, struct QtXml_PackedString tagName);
int QDomNode_LineNumber(void* ptr);
struct QtXml_PackedString QDomNode_LocalName(void* ptr);
void* QDomNode_NamedItem(void* ptr, struct QtXml_PackedString name);
struct QtXml_PackedString QDomNode_NamespaceURI(void* ptr);
void* QDomNode_NextSibling(void* ptr);
void* QDomNode_NextSiblingElement(void* ptr, struct QtXml_PackedString tagName);
struct QtXml_PackedString QDomNode_NodeName(void* ptr);
long long QDomNode_NodeType(void* ptr);
struct QtXml_PackedString QDomNode_NodeValue(void* ptr);
void QDomNode_Normalize(void* ptr);
void* QDomNode_OwnerDocument(void* ptr);
void* QDomNode_ParentNode(void* ptr);
struct QtXml_PackedString QDomNode_Prefix(void* ptr);
void* QDomNode_PreviousSibling(void* ptr);
void* QDomNode_PreviousSiblingElement(void* ptr, struct QtXml_PackedString tagName);
void* QDomNode_RemoveChild(void* ptr, void* oldChild);
void* QDomNode_ReplaceChild(void* ptr, void* newChild, void* oldChild);
void QDomNode_Save(void* ptr, void* stream, int indent, long long encodingPolicy);
void QDomNode_SetNodeValue(void* ptr, struct QtXml_PackedString v);
void QDomNode_SetPrefix(void* ptr, struct QtXml_PackedString pre);
void* QDomNode_ToAttr(void* ptr);
void* QDomNode_ToCDATASection(void* ptr);
void* QDomNode_ToCharacterData(void* ptr);
void* QDomNode_ToComment(void* ptr);
void* QDomNode_ToDocument(void* ptr);
void* QDomNode_ToDocumentFragment(void* ptr);
void* QDomNode_ToDocumentType(void* ptr);
void* QDomNode_ToElement(void* ptr);
void* QDomNode_ToEntity(void* ptr);
void* QDomNode_ToEntityReference(void* ptr);
void* QDomNode_ToNotation(void* ptr);
void* QDomNode_ToProcessingInstruction(void* ptr);
void* QDomNode_ToText(void* ptr);
void QDomNode_DestroyQDomNode(void* ptr);
void* QDomNodeList_NewQDomNodeList();
void* QDomNodeList_NewQDomNodeList2(void* n);
void* QDomNodeList_At(void* ptr, int index);
int QDomNodeList_Count(void* ptr);
char QDomNodeList_IsEmpty(void* ptr);
void* QDomNodeList_Item(void* ptr, int index);
int QDomNodeList_Length(void* ptr);
int QDomNodeList_Size(void* ptr);
void QDomNodeList_DestroyQDomNodeList(void* ptr);
void* QDomNotation_NewQDomNotation();
void* QDomNotation_NewQDomNotation2(void* x);
struct QtXml_PackedString QDomNotation_PublicId(void* ptr);
struct QtXml_PackedString QDomNotation_SystemId(void* ptr);
void* QDomProcessingInstruction_NewQDomProcessingInstruction();
void* QDomProcessingInstruction_NewQDomProcessingInstruction2(void* x);
struct QtXml_PackedString QDomProcessingInstruction_Data(void* ptr);
void QDomProcessingInstruction_SetData(void* ptr, struct QtXml_PackedString d);
struct QtXml_PackedString QDomProcessingInstruction_Target(void* ptr);
void* QDomText_NewQDomText();
void* QDomText_NewQDomText2(void* x);
void* QDomText_SplitText(void* ptr, int offset);
void* QXmlAttributes_NewQXmlAttributes();
void QXmlAttributes_Append(void* ptr, struct QtXml_PackedString qName, struct QtXml_PackedString uri, struct QtXml_PackedString localPart, struct QtXml_PackedString value);
void QXmlAttributes_Clear(void* ptr);
int QXmlAttributes_Count(void* ptr);
int QXmlAttributes_Index(void* ptr, struct QtXml_PackedString qName);
int QXmlAttributes_Index2(void* ptr, void* qName);
int QXmlAttributes_Index3(void* ptr, struct QtXml_PackedString uri, struct QtXml_PackedString localPart);
int QXmlAttributes_Length(void* ptr);
struct QtXml_PackedString QXmlAttributes_LocalName(void* ptr, int index);
struct QtXml_PackedString QXmlAttributes_QName(void* ptr, int index);
void QXmlAttributes_Swap(void* ptr, void* other);
struct QtXml_PackedString QXmlAttributes_Type(void* ptr, int index);
struct QtXml_PackedString QXmlAttributes_Type2(void* ptr, struct QtXml_PackedString qName);
struct QtXml_PackedString QXmlAttributes_Type3(void* ptr, struct QtXml_PackedString uri, struct QtXml_PackedString localName);
struct QtXml_PackedString QXmlAttributes_Uri(void* ptr, int index);
struct QtXml_PackedString QXmlAttributes_Value(void* ptr, int index);
struct QtXml_PackedString QXmlAttributes_Value2(void* ptr, struct QtXml_PackedString qName);
struct QtXml_PackedString QXmlAttributes_Value3(void* ptr, void* qName);
struct QtXml_PackedString QXmlAttributes_Value4(void* ptr, struct QtXml_PackedString uri, struct QtXml_PackedString localName);
void QXmlAttributes_DestroyQXmlAttributes(void* ptr);
void QXmlAttributes_DestroyQXmlAttributesDefault(void* ptr);
char QXmlContentHandler_Characters(void* ptr, struct QtXml_PackedString ch);
char QXmlContentHandler_EndDocument(void* ptr);
char QXmlContentHandler_EndElement(void* ptr, struct QtXml_PackedString namespaceURI, struct QtXml_PackedString localName, struct QtXml_PackedString qName);
char QXmlContentHandler_EndPrefixMapping(void* ptr, struct QtXml_PackedString prefix);
struct QtXml_PackedString QXmlContentHandler_ErrorString(void* ptr);
char QXmlContentHandler_IgnorableWhitespace(void* ptr, struct QtXml_PackedString ch);
char QXmlContentHandler_ProcessingInstruction(void* ptr, struct QtXml_PackedString target, struct QtXml_PackedString data);
void QXmlContentHandler_SetDocumentLocator(void* ptr, void* locator);
char QXmlContentHandler_SkippedEntity(void* ptr, struct QtXml_PackedString name);
char QXmlContentHandler_StartDocument(void* ptr);
char QXmlContentHandler_StartElement(void* ptr, struct QtXml_PackedString namespaceURI, struct QtXml_PackedString localName, struct QtXml_PackedString qName, void* atts);
char QXmlContentHandler_StartPrefixMapping(void* ptr, struct QtXml_PackedString prefix, struct QtXml_PackedString uri);
void QXmlContentHandler_DestroyQXmlContentHandler(void* ptr);
void QXmlContentHandler_DestroyQXmlContentHandlerDefault(void* ptr);
struct QtXml_PackedString QXmlDTDHandler_ErrorString(void* ptr);
char QXmlDTDHandler_NotationDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDTDHandler_UnparsedEntityDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId, struct QtXml_PackedString notationName);
void QXmlDTDHandler_DestroyQXmlDTDHandler(void* ptr);
void QXmlDTDHandler_DestroyQXmlDTDHandlerDefault(void* ptr);
char QXmlDeclHandler_AttributeDecl(void* ptr, struct QtXml_PackedString eName, struct QtXml_PackedString aName, struct QtXml_PackedString ty, struct QtXml_PackedString valueDefault, struct QtXml_PackedString value);
struct QtXml_PackedString QXmlDeclHandler_ErrorString(void* ptr);
char QXmlDeclHandler_ExternalEntityDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDeclHandler_InternalEntityDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString value);
void QXmlDeclHandler_DestroyQXmlDeclHandler(void* ptr);
void QXmlDeclHandler_DestroyQXmlDeclHandlerDefault(void* ptr);
void* QXmlDefaultHandler_NewQXmlDefaultHandler();
char QXmlDefaultHandler_AttributeDecl(void* ptr, struct QtXml_PackedString eName, struct QtXml_PackedString aName, struct QtXml_PackedString ty, struct QtXml_PackedString valueDefault, struct QtXml_PackedString value);
char QXmlDefaultHandler_AttributeDeclDefault(void* ptr, struct QtXml_PackedString eName, struct QtXml_PackedString aName, struct QtXml_PackedString ty, struct QtXml_PackedString valueDefault, struct QtXml_PackedString value);
char QXmlDefaultHandler_Characters(void* ptr, struct QtXml_PackedString ch);
char QXmlDefaultHandler_CharactersDefault(void* ptr, struct QtXml_PackedString ch);
char QXmlDefaultHandler_Comment(void* ptr, struct QtXml_PackedString ch);
char QXmlDefaultHandler_CommentDefault(void* ptr, struct QtXml_PackedString ch);
char QXmlDefaultHandler_EndCDATA(void* ptr);
char QXmlDefaultHandler_EndCDATADefault(void* ptr);
char QXmlDefaultHandler_EndDTD(void* ptr);
char QXmlDefaultHandler_EndDTDDefault(void* ptr);
char QXmlDefaultHandler_EndDocument(void* ptr);
char QXmlDefaultHandler_EndDocumentDefault(void* ptr);
char QXmlDefaultHandler_EndElement(void* ptr, struct QtXml_PackedString namespaceURI, struct QtXml_PackedString localName, struct QtXml_PackedString qName);
char QXmlDefaultHandler_EndElementDefault(void* ptr, struct QtXml_PackedString namespaceURI, struct QtXml_PackedString localName, struct QtXml_PackedString qName);
char QXmlDefaultHandler_EndEntity(void* ptr, struct QtXml_PackedString name);
char QXmlDefaultHandler_EndEntityDefault(void* ptr, struct QtXml_PackedString name);
char QXmlDefaultHandler_EndPrefixMapping(void* ptr, struct QtXml_PackedString prefix);
char QXmlDefaultHandler_EndPrefixMappingDefault(void* ptr, struct QtXml_PackedString prefix);
char QXmlDefaultHandler_Error(void* ptr, void* exception);
char QXmlDefaultHandler_ErrorDefault(void* ptr, void* exception);
struct QtXml_PackedString QXmlDefaultHandler_ErrorString(void* ptr);
struct QtXml_PackedString QXmlDefaultHandler_ErrorStringDefault(void* ptr);
char QXmlDefaultHandler_ExternalEntityDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDefaultHandler_ExternalEntityDeclDefault(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDefaultHandler_FatalError(void* ptr, void* exception);
char QXmlDefaultHandler_FatalErrorDefault(void* ptr, void* exception);
char QXmlDefaultHandler_IgnorableWhitespace(void* ptr, struct QtXml_PackedString ch);
char QXmlDefaultHandler_IgnorableWhitespaceDefault(void* ptr, struct QtXml_PackedString ch);
char QXmlDefaultHandler_InternalEntityDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString value);
char QXmlDefaultHandler_InternalEntityDeclDefault(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString value);
char QXmlDefaultHandler_NotationDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDefaultHandler_NotationDeclDefault(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDefaultHandler_ProcessingInstruction(void* ptr, struct QtXml_PackedString target, struct QtXml_PackedString data);
char QXmlDefaultHandler_ProcessingInstructionDefault(void* ptr, struct QtXml_PackedString target, struct QtXml_PackedString data);
void QXmlDefaultHandler_SetDocumentLocator(void* ptr, void* locator);
void QXmlDefaultHandler_SetDocumentLocatorDefault(void* ptr, void* locator);
char QXmlDefaultHandler_SkippedEntity(void* ptr, struct QtXml_PackedString name);
char QXmlDefaultHandler_SkippedEntityDefault(void* ptr, struct QtXml_PackedString name);
char QXmlDefaultHandler_StartCDATA(void* ptr);
char QXmlDefaultHandler_StartCDATADefault(void* ptr);
char QXmlDefaultHandler_StartDTD(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDefaultHandler_StartDTDDefault(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlDefaultHandler_StartDocument(void* ptr);
char QXmlDefaultHandler_StartDocumentDefault(void* ptr);
char QXmlDefaultHandler_StartElement(void* ptr, struct QtXml_PackedString namespaceURI, struct QtXml_PackedString localName, struct QtXml_PackedString qName, void* atts);
char QXmlDefaultHandler_StartElementDefault(void* ptr, struct QtXml_PackedString namespaceURI, struct QtXml_PackedString localName, struct QtXml_PackedString qName, void* atts);
char QXmlDefaultHandler_StartEntity(void* ptr, struct QtXml_PackedString name);
char QXmlDefaultHandler_StartEntityDefault(void* ptr, struct QtXml_PackedString name);
char QXmlDefaultHandler_StartPrefixMapping(void* ptr, struct QtXml_PackedString prefix, struct QtXml_PackedString uri);
char QXmlDefaultHandler_StartPrefixMappingDefault(void* ptr, struct QtXml_PackedString prefix, struct QtXml_PackedString uri);
char QXmlDefaultHandler_UnparsedEntityDecl(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId, struct QtXml_PackedString notationName);
char QXmlDefaultHandler_UnparsedEntityDeclDefault(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId, struct QtXml_PackedString notationName);
char QXmlDefaultHandler_Warning(void* ptr, void* exception);
char QXmlDefaultHandler_WarningDefault(void* ptr, void* exception);
void QXmlDefaultHandler_DestroyQXmlDefaultHandler(void* ptr);
void QXmlDefaultHandler_DestroyQXmlDefaultHandlerDefault(void* ptr);
struct QtXml_PackedString QXmlEntityResolver_ErrorString(void* ptr);
void QXmlEntityResolver_DestroyQXmlEntityResolver(void* ptr);
void QXmlEntityResolver_DestroyQXmlEntityResolverDefault(void* ptr);
char QXmlErrorHandler_Error(void* ptr, void* exception);
struct QtXml_PackedString QXmlErrorHandler_ErrorString(void* ptr);
char QXmlErrorHandler_FatalError(void* ptr, void* exception);
char QXmlErrorHandler_Warning(void* ptr, void* exception);
void QXmlErrorHandler_DestroyQXmlErrorHandler(void* ptr);
void QXmlErrorHandler_DestroyQXmlErrorHandlerDefault(void* ptr);
void* QXmlInputSource_NewQXmlInputSource();
void* QXmlInputSource_NewQXmlInputSource2(void* dev);
struct QtXml_PackedString QXmlInputSource_Data(void* ptr);
struct QtXml_PackedString QXmlInputSource_DataDefault(void* ptr);
void QXmlInputSource_FetchData(void* ptr);
void QXmlInputSource_FetchDataDefault(void* ptr);
struct QtXml_PackedString QXmlInputSource_FromRawData(void* ptr, void* data, char beginning);
struct QtXml_PackedString QXmlInputSource_FromRawDataDefault(void* ptr, void* data, char beginning);
void* QXmlInputSource_Next(void* ptr);
void* QXmlInputSource_NextDefault(void* ptr);
void QXmlInputSource_Reset(void* ptr);
void QXmlInputSource_ResetDefault(void* ptr);
void QXmlInputSource_SetData(void* ptr, struct QtXml_PackedString dat);
void QXmlInputSource_SetDataDefault(void* ptr, struct QtXml_PackedString dat);
void QXmlInputSource_SetData2(void* ptr, void* dat);
void QXmlInputSource_SetData2Default(void* ptr, void* dat);
void QXmlInputSource_DestroyQXmlInputSource(void* ptr);
void QXmlInputSource_DestroyQXmlInputSourceDefault(void* ptr);
char QXmlLexicalHandler_Comment(void* ptr, struct QtXml_PackedString ch);
char QXmlLexicalHandler_EndCDATA(void* ptr);
char QXmlLexicalHandler_EndDTD(void* ptr);
char QXmlLexicalHandler_EndEntity(void* ptr, struct QtXml_PackedString name);
struct QtXml_PackedString QXmlLexicalHandler_ErrorString(void* ptr);
char QXmlLexicalHandler_StartCDATA(void* ptr);
char QXmlLexicalHandler_StartDTD(void* ptr, struct QtXml_PackedString name, struct QtXml_PackedString publicId, struct QtXml_PackedString systemId);
char QXmlLexicalHandler_StartEntity(void* ptr, struct QtXml_PackedString name);
void QXmlLexicalHandler_DestroyQXmlLexicalHandler(void* ptr);
void QXmlLexicalHandler_DestroyQXmlLexicalHandlerDefault(void* ptr);
void* QXmlLocator_NewQXmlLocator();
int QXmlLocator_ColumnNumber(void* ptr);
int QXmlLocator_LineNumber(void* ptr);
void QXmlLocator_DestroyQXmlLocator(void* ptr);
void QXmlLocator_DestroyQXmlLocatorDefault(void* ptr);
void* QXmlNamespaceSupport_NewQXmlNamespaceSupport();
void QXmlNamespaceSupport_PopContext(void* ptr);
struct QtXml_PackedString QXmlNamespaceSupport_Prefix(void* ptr, struct QtXml_PackedString uri);
struct QtXml_PackedString QXmlNamespaceSupport_Prefixes(void* ptr);
struct QtXml_PackedString QXmlNamespaceSupport_Prefixes2(void* ptr, struct QtXml_PackedString uri);
void QXmlNamespaceSupport_ProcessName(void* ptr, struct QtXml_PackedString qname, char isAttribute, struct QtXml_PackedString nsuri, struct QtXml_PackedString localname);
void QXmlNamespaceSupport_PushContext(void* ptr);
void QXmlNamespaceSupport_Reset(void* ptr);
void QXmlNamespaceSupport_SetPrefix(void* ptr, struct QtXml_PackedString pre, struct QtXml_PackedString uri);
void QXmlNamespaceSupport_SplitName(void* ptr, struct QtXml_PackedString qname, struct QtXml_PackedString prefix, struct QtXml_PackedString localname);
struct QtXml_PackedString QXmlNamespaceSupport_Uri(void* ptr, struct QtXml_PackedString prefix);
void QXmlNamespaceSupport_DestroyQXmlNamespaceSupport(void* ptr);
void* QXmlParseException_NewQXmlParseException(struct QtXml_PackedString name, int c, int l, struct QtXml_PackedString p, struct QtXml_PackedString s);
void* QXmlParseException_NewQXmlParseException2(void* other);
int QXmlParseException_ColumnNumber(void* ptr);
int QXmlParseException_LineNumber(void* ptr);
struct QtXml_PackedString QXmlParseException_Message(void* ptr);
struct QtXml_PackedString QXmlParseException_PublicId(void* ptr);
struct QtXml_PackedString QXmlParseException_SystemId(void* ptr);
void QXmlParseException_DestroyQXmlParseException(void* ptr);
void* QXmlReader_DTDHandler(void* ptr);
void* QXmlReader_ContentHandler(void* ptr);
void* QXmlReader_DeclHandler(void* ptr);
void* QXmlReader_EntityResolver(void* ptr);
void* QXmlReader_ErrorHandler(void* ptr);
char QXmlReader_Feature(void* ptr, struct QtXml_PackedString name, char* ok);
char QXmlReader_HasFeature(void* ptr, struct QtXml_PackedString name);
char QXmlReader_HasProperty(void* ptr, struct QtXml_PackedString name);
void* QXmlReader_LexicalHandler(void* ptr);
void* QXmlReader_Property(void* ptr, struct QtXml_PackedString name, char* ok);
void QXmlReader_SetContentHandler(void* ptr, void* handler);
void QXmlReader_SetDTDHandler(void* ptr, void* handler);
void QXmlReader_SetDeclHandler(void* ptr, void* handler);
void QXmlReader_SetEntityResolver(void* ptr, void* handler);
void QXmlReader_SetErrorHandler(void* ptr, void* handler);
void QXmlReader_SetFeature(void* ptr, struct QtXml_PackedString name, char value);
void QXmlReader_SetLexicalHandler(void* ptr, void* handler);
void QXmlReader_SetProperty(void* ptr, struct QtXml_PackedString name, void* value);
void QXmlReader_DestroyQXmlReader(void* ptr);
void QXmlReader_DestroyQXmlReaderDefault(void* ptr);
void* QXmlSimpleReader_DTDHandler(void* ptr);
void* QXmlSimpleReader_DTDHandlerDefault(void* ptr);
void* QXmlSimpleReader_NewQXmlSimpleReader();
void* QXmlSimpleReader_ContentHandler(void* ptr);
void* QXmlSimpleReader_ContentHandlerDefault(void* ptr);
void* QXmlSimpleReader_DeclHandler(void* ptr);
void* QXmlSimpleReader_DeclHandlerDefault(void* ptr);
void* QXmlSimpleReader_EntityResolver(void* ptr);
void* QXmlSimpleReader_EntityResolverDefault(void* ptr);
void* QXmlSimpleReader_ErrorHandler(void* ptr);
void* QXmlSimpleReader_ErrorHandlerDefault(void* ptr);
char QXmlSimpleReader_Feature(void* ptr, struct QtXml_PackedString name, char* ok);
char QXmlSimpleReader_FeatureDefault(void* ptr, struct QtXml_PackedString name, char* ok);
char QXmlSimpleReader_HasFeature(void* ptr, struct QtXml_PackedString name);
char QXmlSimpleReader_HasFeatureDefault(void* ptr, struct QtXml_PackedString name);
char QXmlSimpleReader_HasProperty(void* ptr, struct QtXml_PackedString name);
char QXmlSimpleReader_HasPropertyDefault(void* ptr, struct QtXml_PackedString name);
void* QXmlSimpleReader_LexicalHandler(void* ptr);
void* QXmlSimpleReader_LexicalHandlerDefault(void* ptr);
char QXmlSimpleReader_Parse(void* ptr, void* input);
char QXmlSimpleReader_ParseDefault(void* ptr, void* input);
char QXmlSimpleReader_Parse2(void* ptr, void* input);
char QXmlSimpleReader_Parse2Default(void* ptr, void* input);
char QXmlSimpleReader_Parse3(void* ptr, void* input, char incremental);
char QXmlSimpleReader_Parse3Default(void* ptr, void* input, char incremental);
char QXmlSimpleReader_ParseContinue(void* ptr);
char QXmlSimpleReader_ParseContinueDefault(void* ptr);
void* QXmlSimpleReader_Property(void* ptr, struct QtXml_PackedString name, char* ok);
void* QXmlSimpleReader_PropertyDefault(void* ptr, struct QtXml_PackedString name, char* ok);
void QXmlSimpleReader_SetContentHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetContentHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetDTDHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetDTDHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetDeclHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetDeclHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetEntityResolver(void* ptr, void* handler);
void QXmlSimpleReader_SetEntityResolverDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetErrorHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetErrorHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetFeature(void* ptr, struct QtXml_PackedString name, char enable);
void QXmlSimpleReader_SetFeatureDefault(void* ptr, struct QtXml_PackedString name, char enable);
void QXmlSimpleReader_SetLexicalHandler(void* ptr, void* handler);
void QXmlSimpleReader_SetLexicalHandlerDefault(void* ptr, void* handler);
void QXmlSimpleReader_SetProperty(void* ptr, struct QtXml_PackedString name, void* value);
void QXmlSimpleReader_SetPropertyDefault(void* ptr, struct QtXml_PackedString name, void* value);
void QXmlSimpleReader_DestroyQXmlSimpleReader(void* ptr);
void QXmlSimpleReader_DestroyQXmlSimpleReaderDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif