//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface WBSPasswordAuditingEligibleDomainsManager : NSObject
{
    NSSet *_domainsIneligibleForPasswordAuditing;
}

- (void).cxx_destruct;
@property(copy) NSSet *domainsIneligibleForPasswordAuditing; // @synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing;
- (id)initWithDomainsIneligibleForPasswordAuditing:(id)arg1;
- (id)init;

@end
