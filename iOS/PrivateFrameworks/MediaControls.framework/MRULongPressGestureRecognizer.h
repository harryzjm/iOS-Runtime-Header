//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRULongPressGestureRecognizer : UILongPressGestureRecognizer
{
    NSMutableArray *_cancellationHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cancellationHandlers; // @synthesize cancellationHandlers=_cancellationHandlers;
- (void)setState:(long long)arg1;
- (void)addCancellationHandler:(CDUnknownBlockType)arg1;

@end

