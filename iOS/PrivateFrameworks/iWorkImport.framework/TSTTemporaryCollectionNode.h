//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTTemporaryCollectionNode : NSObject
{
    struct TSCEVectorIndexPair _dimensions;
    NSMutableArray *_children;
    NSString *_whitespaceBeforeFirstChild;
    NSMutableArray *_whitespaceAfterDelimiters;
    unsigned long long _firstIndex;
    unsigned long long _lastIndex;
}

@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) unsigned long long firstIndex; // @synthesize firstIndex=_firstIndex;
@property(retain, nonatomic) NSMutableArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property(retain, nonatomic) NSString *whitespaceBeforeFirstChild; // @synthesize whitespaceBeforeFirstChild=_whitespaceBeforeFirstChild;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) struct TSCEVectorIndexPair dimensions; // @synthesize dimensions=_dimensions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

