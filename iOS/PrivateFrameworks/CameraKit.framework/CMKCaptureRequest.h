//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraKit/NSCopying-Protocol.h>
#import <CameraKit/NSMutableCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface CMKCaptureRequest : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *__parameterStorage;
    long long _type;
}

@property(readonly, nonatomic) NSMutableDictionary *_parameterStorage; // @synthesize _parameterStorage=__parameterStorage;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *_customParameterStorage;
- (id)parameterForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;

@end
