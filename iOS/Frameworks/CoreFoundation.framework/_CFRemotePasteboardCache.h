//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _CFRemotePasteboardCache
{
    int _state;
}

@property(readonly) int state; // @synthesize state=_state;
- (void)prepareDataForItemIdentifier:(long long)arg1 flavor:(struct __CFString *)arg2;
- (void)prepareMetadata;
- (void)notifyRemotePateboardBecameAvailable:(unsigned char)arg1 localGeneration:(long long)arg2;

@end

