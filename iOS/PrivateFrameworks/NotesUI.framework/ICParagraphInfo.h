//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TTParagraphStyle;

@interface ICParagraphInfo : NSObject
{
    TTParagraphStyle *_paragraphStyle;
    NSMutableArray *_children;
    struct _NSRange _characterRange;
    struct _NSRange _rangeIncludingChildren;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) struct _NSRange rangeIncludingChildren; // @synthesize rangeIncludingChildren=_rangeIncludingChildren;
@property(nonatomic) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(retain, nonatomic) TTParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(readonly, nonatomic) unsigned long long indent;
@property(readonly, nonatomic) unsigned int style;

@end
