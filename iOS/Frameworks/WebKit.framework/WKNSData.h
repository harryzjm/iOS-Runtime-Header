//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSData : NSData
{
    struct ObjectStorage<API::Data> _data;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

