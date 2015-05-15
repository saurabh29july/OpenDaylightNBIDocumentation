#import "full.h"
#ifndef DEF_FULLNS0ConfigurationObject_M
#define DEF_FULLNS0ConfigurationObject_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0ConfigurationObject

- (void) dealloc
{
  [super dealloc];
}
@end /* implementation FULLNS0ConfigurationObject */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0ConfigurationObject (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface FULLNS0ConfigurationObject (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0ConfigurationObject (JAXB)

/**
 * Read an instance of FULLNS0ConfigurationObject from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0ConfigurationObject defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0ConfigurationObject *_fULLNS0ConfigurationObject = [[FULLNS0ConfigurationObject alloc] init];
  NS_DURING
  {
    [_fULLNS0ConfigurationObject initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0ConfigurationObject = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0ConfigurationObject autorelease];
  return _fULLNS0ConfigurationObject;
}

/**
 * Initialize this instance of FULLNS0ConfigurationObject according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0ConfigurationObject to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0ConfigurationObject (JAXB) */

#endif /* DEF_FULLNS0ConfigurationObject_M */
#ifndef DEF_FULLNS0UserConfig_M
#define DEF_FULLNS0UserConfig_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0UserConfig

/**
 * (no documentation provided)
 */
- (NSArray *) roles
{
  return _roles;
}

/**
 * (no documentation provided)
 */
- (void) setRoles: (NSArray *) newRoles
{
  [newRoles retain];
  [_roles release];
  _roles = newRoles;
}

/**
 * (no documentation provided)
 */
- (NSString *) password
{
  return _password;
}

/**
 * (no documentation provided)
 */
- (void) setPassword: (NSString *) newPassword
{
  [newPassword retain];
  [_password release];
  _password = newPassword;
}

/**
 * (no documentation provided)
 */
- (NSString *) user
{
  return _user;
}

/**
 * (no documentation provided)
 */
- (void) setUser: (NSString *) newUser
{
  [newUser retain];
  [_user release];
  _user = newUser;
}

- (void) dealloc
{
  [self setRoles: nil];
  [self setPassword: nil];
  [self setUser: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0UserConfig *_fULLNS0UserConfig;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0UserConfig = (FULLNS0UserConfig *) [FULLNS0UserConfig readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0UserConfig;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0UserConfig */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0UserConfig (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0UserConfig (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0UserConfig (JAXB)

/**
 * Read an instance of FULLNS0UserConfig from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0UserConfig defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0UserConfig *_fULLNS0UserConfig = [[FULLNS0UserConfig alloc] init];
  NS_DURING
  {
    [_fULLNS0UserConfig initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0UserConfig = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0UserConfig autorelease];
  return _fULLNS0UserConfig;
}

/**
 * Initialize this instance of FULLNS0UserConfig according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0UserConfig to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0UserConfig from an XML reader. The element to be read is
 * "userConfig".
 *
 * @param reader The XML reader.
 * @return The FULLNS0UserConfig.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0UserConfig *_userConfig = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element userConfig."];
    }
  }

  if (xmlStrcmp(BAD_CAST "userConfig", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}userConfig.");
#endif
    _userConfig = (FULLNS0UserConfig *)[FULLNS0UserConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}userConfig.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0UserConfig. Expected element userConfig. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0UserConfig. Expected element userConfig. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _userConfig;
}

/**
 * Writes this FULLNS0UserConfig to XML under element name "userConfig".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0UserConfig to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userConfig", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}userConfig. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}userConfig for root element {}userConfig...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}userConfig for root element {}userConfig...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}userConfig. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "roles", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self roles]) {
      [self setRoles: [[self roles] arrayByAddingObject: __child]];
    }
    else {
      [self setRoles: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "password", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPassword: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}user of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}user of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUser: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self roles]) {
    __enumerator = [[self roles] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roles", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}roles."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}roles...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}roles...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}roles."];
      }
    } //end item iterator.
  }
  if ([self password]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "password", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}password."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}password...");
#endif
    [[self password] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}password...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}password."];
    }
  }
  if ([self user]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}user."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}user...");
#endif
    [[self user] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}user...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}user."];
    }
  }
}
@end /* implementation FULLNS0UserConfig (JAXB) */

#endif /* DEF_FULLNS0UserConfig_M */
