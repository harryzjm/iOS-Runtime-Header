//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOLogAdaptorFactory : NSObject
{
    NSMutableDictionary *_logAdaptors;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_createLogAdaptorWithPolicy:(id)arg1;
- (id)logAdaptorWithPolicy:(id)arg1;
- (void)dealloc;
- (id)init;

@end

