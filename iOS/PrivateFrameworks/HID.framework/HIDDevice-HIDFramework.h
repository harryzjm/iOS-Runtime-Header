//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IOKit/HIDDevice.h>

@interface HIDDevice (HIDFramework)
@property(readonly) unsigned int service;
- (void)cancel;
- (void)activate;
- (void)close;
- (_Bool)openWithOptions:(long long)arg1 error:(out id *)arg2;
- (void)open;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (void)setInputReportHandler:(CDUnknownBlockType)arg1;
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;
- (void)setBatchInputElementHandler:(CDUnknownBlockType)arg1;
- (void)setInputElementHandler:(CDUnknownBlockType)arg1;
- (void)setInputElementMatching:(id)arg1;
- (_Bool)commitElements:(id)arg1 direction:(long long)arg2 error:(out id *)arg3 timeout:(long long)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)commitElements:(id)arg1 direction:(long long)arg2 error:(out id *)arg3;
- (_Bool)getReport:(void *)arg1 reportLength:(long long *)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5 timeout:(long long)arg6 callback:(CDUnknownBlockType)arg7;
- (_Bool)getReport:(void *)arg1 reportLength:(long long *)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5;
- (_Bool)setReport:(const void *)arg1 reportLength:(long long)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5 timeout:(long long)arg6 callback:(CDUnknownBlockType)arg7;
- (_Bool)setReport:(const void *)arg1 reportLength:(long long)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5;
- (id)elementsMatching:(id)arg1;
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
@end

