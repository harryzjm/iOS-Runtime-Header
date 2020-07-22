//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface TTYUtteranceRequest : NSObject
{
    unsigned long long _index;
    NSString *_string;
    NSIndexPath *_cellIndexPath;
}

+ (id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3;
@property(nonatomic) __weak NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;

@end

