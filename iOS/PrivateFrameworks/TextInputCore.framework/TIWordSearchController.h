//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TIWordSearchController : NSObject
{
    NSMapTable *_inputModeToWordSearchMapping;
}

+ (id)sharedWordSearchController;
@property(retain, nonatomic) NSMapTable *inputModeToWordSearchMapping; // @synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping;
- (void).cxx_destruct;
- (id)wordSearchForInputMode:(id)arg1;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (id)init;

@end

