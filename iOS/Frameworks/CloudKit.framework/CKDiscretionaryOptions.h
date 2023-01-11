//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCoding-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding>
{
    _Bool _allowsExpensiveAccess;
    NSString *_sourceApplicationBundleId;
    NSString *_secondarySourceAppplicationBundleId;
    double _timeoutIntervalForResource;
    unsigned long long _discretionaryNetworkBehavior;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) _Bool allowsExpensiveAccess; // @synthesize allowsExpensiveAccess=_allowsExpensiveAccess;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(retain, nonatomic) NSString *secondarySourceAppplicationBundleId; // @synthesize secondarySourceAppplicationBundleId=_secondarySourceAppplicationBundleId;
@property(retain, nonatomic) NSString *sourceApplicationBundleId; // @synthesize sourceApplicationBundleId=_sourceApplicationBundleId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
