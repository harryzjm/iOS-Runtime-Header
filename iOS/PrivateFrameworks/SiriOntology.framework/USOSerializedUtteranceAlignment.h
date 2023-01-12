//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSArray;

@interface USOSerializedUtteranceAlignment : NSObject <NSSecureCoding>
{
    unsigned int _asrHypothesisIndex;
    unsigned long long _nodeIndex;
    NSArray *_spans;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *spans; // @synthesize spans=_spans;
@property unsigned int asrHypothesisIndex; // @synthesize asrHypothesisIndex=_asrHypothesisIndex;
@property unsigned long long nodeIndex; // @synthesize nodeIndex=_nodeIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodeIndex:(unsigned long long)arg1 asrHypothesisIndex:(unsigned int)arg2 spans:(id)arg3;

@end
