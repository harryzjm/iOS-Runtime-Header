//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate;

@interface NTKCFaceDetailKaleidoscopeEditOptionCell
{
    id <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
    long long _userOptionIndex;
}

@property(nonatomic) long long userOptionIndex; // @synthesize userOptionIndex=_userOptionIndex;
@property(nonatomic) __weak id <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)selectUserOption;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_setupFromCollection;

@end

