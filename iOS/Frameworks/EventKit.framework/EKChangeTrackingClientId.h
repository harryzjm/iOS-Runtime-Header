//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADChangeTrackingClientId, NSString;

@interface EKChangeTrackingClientId : NSObject
{
    NSString *_suffix;
    NSString *_customClientId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customClientId; // @synthesize customClientId=_customClientId;
@property(readonly, copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) CADChangeTrackingClientId *CADChangeTrackingClientId;
- (id)initWithCustomClientId:(id)arg1 suffix:(id)arg2;
- (id)init;
- (id)initWithSuffix:(id)arg1;
- (id)initWithCustomClientId:(id)arg1;

@end
