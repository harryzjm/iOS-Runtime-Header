//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAURLConfiguration, NSDate, NSHTTPURLResponse;

@interface AARemoteServerConfigurationCache : NSObject
{
    NSDate *_creationDate;
    AAURLConfiguration *_configuration;
    NSHTTPURLResponse *_response;
}

+ (id)cacheWithConfiguration:(id)arg1 response:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) AAURLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)initWithConfiguration:(id)arg1 response:(id)arg2;
- (id)init;

@end
