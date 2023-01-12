//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MUPlacePhotoSliderView, MUPunchoutViewModel;
@protocol MUPhotoTileViewModel;

@protocol MUPlacePhotoSliderDelegate <NSObject>
- (void)photoSliderViewDidTapHeaderView:(MUPlacePhotoSliderView *)arg1;
- (void)photoSliderViewDidScroll:(MUPlacePhotoSliderView *)arg1;
- (void)photoSliderView:(MUPlacePhotoSliderView *)arg1 didTapAttribution:(MUPunchoutViewModel *)arg2;
- (void)photoSliderView:(MUPlacePhotoSliderView *)arg1 didTapViewModel:(id <MUPhotoTileViewModel>)arg2 atIndex:(unsigned long long)arg3;
@end

