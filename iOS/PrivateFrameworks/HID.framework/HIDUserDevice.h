//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HIDUserDevice : NSObject
{
    struct __IOHIDUserDevice *_device;
    CDUnknownBlockType _getReportHandler;
    CDUnknownBlockType _setReportHandler;
    unsigned int _service;
    CDUnknownBlockType _cancelHandler;
}

- (void).cxx_destruct;
@property(readonly) unsigned int service;
- (_Bool)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id *)arg3;
- (_Bool)handleReport:(id)arg1 error:(out id *)arg2;
- (void)setSetReportHandler:(CDUnknownBlockType)arg1;
- (void)setGetReportHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)activate;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end
