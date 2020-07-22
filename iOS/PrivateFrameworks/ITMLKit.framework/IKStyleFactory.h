//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject <NSCopying>
{
    IKStylesGroup *_stylesGroup;
    NSMutableDictionary *_styleListsByClassSelector;
}

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(_Bool)arg2;
@property(readonly, retain, nonatomic) NSMutableDictionary *styleListsByClassSelector; // @synthesize styleListsByClassSelector=_styleListsByClassSelector;
@property(readonly, retain, nonatomic) IKStylesGroup *stylesGroup; // @synthesize stylesGroup=_stylesGroup;
- (void).cxx_destruct;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (void)setViewElementStylesDirty;
- (id)styleListForClassSelector:(id)arg1;
- (id)initWithStylesGroup:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

