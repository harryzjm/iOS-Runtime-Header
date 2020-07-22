//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject
{
    NSDictionary *_brailleCommands;
}

- (void).cxx_destruct;
- (id)localizedNameForCategory:(id)arg1;
- (id)localizedNameForCommand:(id)arg1;
- (id)brailleCommandsForCategory:(id)arg1;
- (id)brailleVoiceOverCategories;
- (void)_loadBrailleCommandsIfNecessary;

@end

