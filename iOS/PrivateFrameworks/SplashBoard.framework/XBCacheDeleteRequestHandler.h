//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol XBApplicationProviding;

@interface XBCacheDeleteRequestHandler : NSObject
{
    id <XBApplicationProviding> _applicationProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <XBApplicationProviding> applicationProvider; // @synthesize applicationProvider=_applicationProvider;
- (id)performPeriodic:(id)arg1 urgency:(int)arg2;
- (id)performPurge:(id)arg1 urgency:(int)arg2;
- (id)amountPurgeable:(id)arg1 urgency:(int)arg2;
- (id)initWithApplicationProvider:(id)arg1;

@end
