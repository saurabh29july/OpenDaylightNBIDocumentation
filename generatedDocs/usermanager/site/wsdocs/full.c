#include <enunciate-common.c>
#ifndef DEF_full_ns0_userConfig_H
#define DEF_full_ns0_userConfig_H

/**
 * (no documentation provided)
 */
struct full_ns0_userConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *roles;

  /**
   * Size of the roles array.
   */
  int _sizeof_roles;

  /**
   * (no documentation provided)
   */
  xmlChar *password;

  /**
   * (no documentation provided)
   */
  xmlChar *user;
};

/**
 * Reads a UserConfig element from XML. The element to be read is "userConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The UserConfig, or NULL in case of error.
 */
struct full_ns0_userConfig *xml_read_full_ns0_userConfig(xmlTextReaderPtr reader);

/**
 * Writes a UserConfig to XML under element name "userConfig".
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_userConfig(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig);

/**
 * Frees a UserConfig.
 *
 * @param _userConfig The UserConfig to free.
 */
void free_full_ns0_userConfig(struct full_ns0_userConfig *_userConfig);

/**
 * Reads a UserConfig element from XML. The element to be read is "userConfig", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The UserConfig, or NULL in case of error.
 */
struct full_ns0_userConfig *xmlTextReaderReadNs0UserConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a UserConfig to XML under element name "userConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserConfigElement(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig);

/**
 * Writes a UserConfig to XML under element name "userConfig".
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig, int writeNamespaces);

/**
 * Frees the children of a UserConfig.
 *
 * @param _userConfig The UserConfig whose children are to be free.
 */
static void freeNs0UserConfigElement(struct full_ns0_userConfig *_userConfig);

/**
 * Reads a UserConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The UserConfig, or NULL in case of error.
 */
static struct full_ns0_userConfig *xmlTextReaderReadNs0UserConfigType(xmlTextReaderPtr reader);

/**
 * Writes a UserConfig to XML.
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserConfigType(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig);

/**
 * Frees the elements of a UserConfig.
 *
 * @param _userConfig The UserConfig to free.
 */
static void freeNs0UserConfigType(struct full_ns0_userConfig *_userConfig);

#endif /* DEF_full_ns0_userConfig_H */
#ifndef DEF_full_ns0_userConfig_M
#define DEF_full_ns0_userConfig_M

/**
 * Reads a UserConfig element from XML. The element to be read is "userConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The UserConfig, or NULL in case of error.
 */
struct full_ns0_userConfig *xml_read_full_ns0_userConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserConfigElement(reader);
}

/**
 * Writes a UserConfig to XML under element name "userConfig".
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_userConfig(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig) {
  return xmlTextWriterWriteNs0UserConfigElementNS(writer, _userConfig, 1);
}

/**
 * Frees a UserConfig.
 *
 * @param _userConfig The UserConfig to free.
 */
void free_full_ns0_userConfig(struct full_ns0_userConfig *_userConfig) {
  freeNs0UserConfigType(_userConfig);
  free(_userConfig);
}

/**
 * Reads a UserConfig element from XML. The element to be read is "userConfig", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The UserConfig, or NULL in case of error.
 */
struct full_ns0_userConfig *xmlTextReaderReadNs0UserConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_userConfig *_userConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}userConfig.\n");
#endif
    _userConfig = xmlTextReaderReadNs0UserConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_userConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}userConfig failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}userConfig failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _userConfig;
}

/**
 * Writes a UserConfig to XML under element name "userConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserConfigElement(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig) {
  return xmlTextWriterWriteNs0UserConfigElementNS(writer, _userConfig, 0);
}

/**
 * Writes a UserConfig to XML under element name "userConfig".
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userConfig", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}userConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}userConfig for root element {}userConfig...\n");
#endif
  status = xmlTextWriterWriteNs0UserConfigType(writer, _userConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}userConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}userConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a UserConfig.
 *
 * @param _userConfig The UserConfig whose children are to be free.
 */
static void freeNs0UserConfigElement(struct full_ns0_userConfig *_userConfig) {
  freeNs0UserConfigType(_userConfig);
}

/**
 * Reads a UserConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the UserConfig, or NULL in case of error.
 */
static struct full_ns0_userConfig *xmlTextReaderReadNs0UserConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_userConfig *_userConfig = calloc(1, sizeof(struct full_ns0_userConfig));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0UserConfigType(_userConfig);
        free(_userConfig);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "roles", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserConfigType(_userConfig);
          free(_userConfig);
          return NULL;
        }

        _userConfig->roles = realloc(_userConfig->roles, (_userConfig->_sizeof_roles + 1) * sizeof(xmlChar));
        memcpy(&(_userConfig->roles[_userConfig->_sizeof_roles++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "password", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserConfigType(_userConfig);
          free(_userConfig);
          return NULL;
        }

        _userConfig->password = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}user of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}user of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserConfigType(_userConfig);
          free(_userConfig);
          return NULL;
        }

        _userConfig->user = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}userConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}userConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _userConfig;
}

/**
 * Writes a UserConfig to XML.
 *
 * @param writer The XML writer.
 * @param _userConfig The UserConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0UserConfigType(xmlTextWriterPtr writer, struct full_ns0_userConfig *_userConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _userConfig->_sizeof_roles; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roles", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}roles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}roles...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_userConfig->roles[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}roles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}roles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_userConfig->password != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "password", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}password...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_userConfig->password));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_userConfig->user != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}user. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}user...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_userConfig->user));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}user. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}user. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a UserConfig.
 *
 * @param _userConfig The UserConfig to free.
 */
static void freeNs0UserConfigType(struct full_ns0_userConfig *_userConfig) {
  int i;
  if (_userConfig->roles != NULL) {
    for (i = 0; i < _userConfig->_sizeof_roles; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor roles[%i] of type full_ns0_userConfig...\n", i);
#endif
      freeXsStringType(&(_userConfig->roles[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor roles of type full_ns0_userConfig...\n");
#endif
    free(_userConfig->roles);
  }
  if (_userConfig->password != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor password of type full_ns0_userConfig...\n");
#endif
    freeXsStringType(_userConfig->password);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor password of type full_ns0_userConfig...\n");
#endif
    free(_userConfig->password);
  }
  if (_userConfig->user != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor user of type full_ns0_userConfig...\n");
#endif
    freeXsStringType(_userConfig->user);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor user of type full_ns0_userConfig...\n");
#endif
    free(_userConfig->user);
  }
}
#endif /* DEF_full_ns0_userConfig_M */
