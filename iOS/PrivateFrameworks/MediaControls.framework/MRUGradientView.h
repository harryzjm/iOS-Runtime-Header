//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

__attribute__((visibility("hidden")))
@interface MRUGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) CAGradientLayer *layer; // @dynamic layer;

@end

