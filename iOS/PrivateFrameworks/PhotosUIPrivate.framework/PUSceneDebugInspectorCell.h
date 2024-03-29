//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class PUSceneDebugInspectorSceneViewModel, UILabel;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorCell : UITableViewCell
{
    PUSceneDebugInspectorSceneViewModel *_viewModel;
    UILabel *_keywordLabel;
    UILabel *_synonymsLabel;
    UILabel *_sceneIdentifierLabel;
    UILabel *_countLabel;
    UILabel *_isIndexedLabel;
    UILabel *_thresholdLabel;
    UILabel *_coverageLabel;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *coverageLabel; // @synthesize coverageLabel=_coverageLabel;
@property(retain, nonatomic) UILabel *thresholdLabel; // @synthesize thresholdLabel=_thresholdLabel;
@property(retain, nonatomic) UILabel *isIndexedLabel; // @synthesize isIndexedLabel=_isIndexedLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *sceneIdentifierLabel; // @synthesize sceneIdentifierLabel=_sceneIdentifierLabel;
@property(retain, nonatomic) UILabel *synonymsLabel; // @synthesize synonymsLabel=_synonymsLabel;
@property(retain, nonatomic) UILabel *keywordLabel; // @synthesize keywordLabel=_keywordLabel;
@property(retain, nonatomic) PUSceneDebugInspectorSceneViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

