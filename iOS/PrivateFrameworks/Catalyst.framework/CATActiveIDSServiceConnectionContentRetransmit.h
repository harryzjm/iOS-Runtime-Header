//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CATActiveIDSServiceConnectionContentRetransmit : NSObject
{
    NSArray *_sequenceNumbers;
}

+ (id)instanceWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *sequenceNumbers; // @synthesize sequenceNumbers=_sequenceNumbers;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long contentType;
- (id)initWithSequenceNumbers:(id)arg1;

@end

