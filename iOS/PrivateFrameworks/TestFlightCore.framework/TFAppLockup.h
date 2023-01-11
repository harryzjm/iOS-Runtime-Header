//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFIconArtwork;

__attribute__((visibility("hidden")))
@interface TFAppLockup : NSObject
{
    NSString *_title;
    NSArray *_subtitles;
    TFIconArtwork *_iconArtwork;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFIconArtwork *iconArtwork; // @synthesize iconArtwork=_iconArtwork;
@property(readonly, copy, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 subtitles:(id)arg2 iconArtwork:(id)arg3;

@end
