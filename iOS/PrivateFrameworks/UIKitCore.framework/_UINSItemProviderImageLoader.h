//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSItemProvider, NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface _UINSItemProviderImageLoader
{
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
    NSProgress *__progress;
}

- (void).cxx_destruct;
@property(retain, setter=_setProgress:) NSProgress *_progress; // @synthesize _progress=__progress;
- (_Bool)_really_cancel;
- (void)_really_loadImage:(CDUnknownBlockType)arg1;
- (id)initWithItemProvider:(id)arg1 typeIdentifier:(id)arg2;

@end
