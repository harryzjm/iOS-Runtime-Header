//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayerInternalSegment : NSObject
{
    unsigned long long _pipeSegmentType;
    unsigned long long _cumulativeHeadlinesUsedCount;
    NSObject<NFLPipeSegment> *_pipeSegment;
    id <NFLPipelayerDelegate> _delegate;
}

@property(nonatomic) __weak id <NFLPipelayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<NFLPipeSegment> *pipeSegment; // @synthesize pipeSegment=_pipeSegment;
@property(nonatomic) unsigned long long cumulativeHeadlinesUsedCount; // @synthesize cumulativeHeadlinesUsedCount=_cumulativeHeadlinesUsedCount;
@property(nonatomic) unsigned long long pipeSegmentType; // @synthesize pipeSegmentType=_pipeSegmentType;
- (void).cxx_destruct;
- (id)description;

@end

