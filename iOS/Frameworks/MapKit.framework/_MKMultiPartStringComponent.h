//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartStringComponent : NSObject
{
    NSAttributedString *_attributedString;
    struct _NSRange _originalRange;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) struct _NSRange originalRange; // @synthesize originalRange=_originalRange;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end

