//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject
{
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)refetchFromDisk;
- (void)_setContents:(id)arg1;
- (void)_load;
- (void)_save;
- (void)check;
- (double)_updateInterval;
- (id)initWithClientLibraryBaseURL:(id)arg1;

@end

