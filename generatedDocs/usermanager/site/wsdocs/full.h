#import "enunciate-common.h"

@class FULLNS0ConfigurationObject;
@class FULLNS0UserConfig;

#ifndef DEF_FULLNS0ConfigurationObject_H
#define DEF_FULLNS0ConfigurationObject_H

/**
 * (no documentation provided)
 */
@interface FULLNS0ConfigurationObject : NSObject
{
  @private
}
@end /* interface FULLNS0ConfigurationObject */

#endif /* DEF_FULLNS0ConfigurationObject_H */
#ifndef DEF_FULLNS0UserConfig_H
#define DEF_FULLNS0UserConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0UserConfig : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSArray *_roles;
    NSString *_password;
    NSString *_user;
}

/**
 * (no documentation provided)
 */
- (NSArray *) roles;

/**
 * (no documentation provided)
 */
- (void) setRoles: (NSArray *) newRoles;

/**
 * (no documentation provided)
 */
- (NSString *) password;

/**
 * (no documentation provided)
 */
- (void) setPassword: (NSString *) newPassword;

/**
 * (no documentation provided)
 */
- (NSString *) user;

/**
 * (no documentation provided)
 */
- (void) setUser: (NSString *) newUser;
@end /* interface FULLNS0UserConfig */

#endif /* DEF_FULLNS0UserConfig_H */
