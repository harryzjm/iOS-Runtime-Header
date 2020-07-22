//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/NSCopying-Protocol.h>

@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule <NSCopying>
{
    IKCSSMediaQuery *_mediaQuery;
    struct _NSRange _queryRange;
}

@property(nonatomic) struct _NSRange queryRange; // @synthesize queryRange=_queryRange;
- (void).cxx_destruct;
- (id)description;
- (id)mediaQuery;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaQuery:(id)arg1;

@end

