//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBAdaptationClient, CBBlueLightClient;

@interface CBClient : NSObject
{
    CBBlueLightClient *_blueLightClient;
    CBAdaptationClient *_adaptationClient;
}

+ (_Bool)supportsAdaptation;
+ (_Bool)supportsBlueLightReduction;
@property(readonly) CBAdaptationClient *adaptationClient; // @synthesize adaptationClient=_adaptationClient;
@property(readonly) CBBlueLightClient *blueLightClient; // @synthesize blueLightClient=_blueLightClient;
- (id)init;

@end

