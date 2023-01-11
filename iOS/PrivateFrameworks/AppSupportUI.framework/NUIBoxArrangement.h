//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSupportUI/_NUIBoxArrangementContainer-Protocol.h>

@class NSString;
@protocol NUIArrangementContainer, NUIBoxArrangementDataSource;

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer>
{
    struct _NUIBoxArrangement _arrangement;
    id <NUIArrangementContainer> _container;
    id <NUIBoxArrangementDataSource> _dataSource;
    struct {
        unsigned int containerDirection:1;
    } _flags;
    double _scale;
    struct CGRect _bounds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)positionItemsInBounds:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (struct CGSize)layoutSizeFittingSize:(struct CGSize)arg1;
- (void)populateBoxArrangementCells:(vector_eb457d57 *)arg1;
- (void)reloadData;
@property(readonly, nonatomic) __weak id <NUIBoxArrangementDataSource> dataSource;
@property(readonly, nonatomic) __weak id <NUIArrangementContainer> container;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
