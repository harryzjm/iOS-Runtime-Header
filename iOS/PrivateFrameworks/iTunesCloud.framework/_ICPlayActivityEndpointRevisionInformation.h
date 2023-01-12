//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _ICPlayActivityEndpointRevisionInformation : NSObject
{
    NSIndexSet *_additionalPendingRevisionsIndexSet;
    unsigned long long _currentRevision;
    NSString *_revisionVersionToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *revisionVersionToken; // @synthesize revisionVersionToken=_revisionVersionToken;
@property(nonatomic) unsigned long long currentRevision; // @synthesize currentRevision=_currentRevision;
@property(copy, nonatomic) NSIndexSet *additionalPendingRevisionsIndexSet; // @synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

