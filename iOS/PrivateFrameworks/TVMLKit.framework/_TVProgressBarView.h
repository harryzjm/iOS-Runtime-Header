//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVProgressBarView : UIView
{
    _Bool _useMaterial;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_completeTintColor;
}

@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

