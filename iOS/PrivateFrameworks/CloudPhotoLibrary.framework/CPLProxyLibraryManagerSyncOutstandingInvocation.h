//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject
{
    _Bool _didFinish;
    NSDictionary *_errors;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didFinish; // @synthesize didFinish=_didFinish;
@property(retain, nonatomic) NSDictionary *errors; // @synthesize errors=_errors;
- (id)description;

@end

