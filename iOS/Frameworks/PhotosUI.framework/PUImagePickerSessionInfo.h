//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface PUImagePickerSessionInfo
{
    _Bool _showsPrompt;
    unsigned long long _selectionLimit;
    NSString *_staticPrompt;
}

@property(copy, nonatomic) NSString *staticPrompt; // @synthesize staticPrompt=_staticPrompt;
@property(nonatomic) _Bool showsPrompt; // @synthesize showsPrompt=_showsPrompt;
- (void)setSelectionLimit:(unsigned long long)arg1;
- (unsigned long long)selectionLimit;
- (void).cxx_destruct;
- (id)localizedPrompt;
- (_Bool)isSelectingAssets;
- (id)initWithPhotoSelectionManager:(id)arg1;

@end
