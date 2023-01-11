//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMapTable, UIStackView;

@interface PXHUDView : UIView
{
    NSMapTable *_visualizationToView;
    UIStackView *_stackView;
}

+ (Class)visualizationClassToViewClass:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSMapTable *visualizationToView; // @synthesize visualizationToView=_visualizationToView;
- (void)removeVisualization:(id)arg1;
- (void)addVisualization:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
