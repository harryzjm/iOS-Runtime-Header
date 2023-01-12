//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (IconFoundationAdditions)
- (_Bool)_IF_isDirectory;
- (_Bool)_IF_conformsToUTI:(id)arg1;
- (id)_IF_typeIdentifier;
- (_Bool)_IF_isAliasFile;
- (_Bool)_IF_isSymLink;
- (_Bool)_IF_isOnBootVolume;
- (_Bool)_IF_isBootVolume;
- (id)_IF_volumeURL;
- (_Bool)_IF_isVolume;
- (long long)_IF_fileSize;
- (id)_IF_modifiedDate;
- (id)_IF_attributeModifiedDate;
- (_Bool)_IF_getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)_IF_contentModifiedDate;
- (_Bool)_IF_setExtendedAttribute:(id)arg1 forName:(id)arg2 error:(id *)arg3;
- (id)_IF_extendedAttributeForName:(id)arg1;
@end
