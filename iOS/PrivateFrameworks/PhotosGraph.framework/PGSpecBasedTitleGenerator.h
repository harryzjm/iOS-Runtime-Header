//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGTitleSpecDelegate-Protocol.h>

@class NSSet, NSString, PGTitle, PGTitleSpecCollection;
@protocol PGSpecBasedTitleGeneratorDelegate;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate>
{
    NSSet *_momentNodes;
    NSSet *_features;
    PGTitleSpecCollection *_specCollection;
    PGTitle *_title;
    id <PGSpecBasedTitleGeneratorDelegate> _delegate;
    unsigned long long _lineBreakBehavior;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property __weak id <PGSpecBasedTitleGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PGTitleSpecCollection *specCollection; // @synthesize specCollection=_specCollection;
@property(retain, nonatomic) NSSet *features; // @synthesize features=_features;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
- (id)titleSpec:(id)arg1 inputForArgument:(id)arg2;
- (id)_titleFromSpecs:(id)arg1;
- (id)_title;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (id)initWithMomentNodes:(id)arg1 features:(id)arg2 specCollection:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(_Bool)arg4;
- (id)initWithMomentNodes:(id)arg1 meaningLabel:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 memoryCategory:(unsigned long long)arg3 subcategory:(unsigned long long)arg4;
- (id)initWithMomentNodes:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3;
- (id)initWithMomentNodes:(id)arg1 specCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
