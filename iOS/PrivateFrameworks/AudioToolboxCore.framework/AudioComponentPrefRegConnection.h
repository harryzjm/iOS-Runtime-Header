//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AudioComponentPrefRegConnection : NSObject
{
    void *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearConfigurationInfoCache;
- (void)writeConfigurationInfoToCache:(id)arg1 configurationInfo:(id)arg2;
- (void)copyConfigurationInfoFromCache:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getInterAppIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getExtensionIcon:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)isGenericAppIcon:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (void)setComponentUserTags:(id)arg1 tags:(id)arg2;
- (void)getComponentUserTags:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(_Bool)arg2 components:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithRegistrar:(void *)arg1 connection:(id)arg2;

@end

