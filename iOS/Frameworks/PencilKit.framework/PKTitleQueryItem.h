//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKTitleQueryItem : NSObject
{
    NSString *_transcribedTitle;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSString *transcribedTitle; // @synthesize transcribedTitle=_transcribedTitle;
- (void).cxx_destruct;
- (id)initWithTranscribedTitle:(id)arg1 bounds:(struct CGRect)arg2;

@end
