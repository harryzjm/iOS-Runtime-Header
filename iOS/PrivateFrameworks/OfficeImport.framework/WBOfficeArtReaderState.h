//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WBReader, WXReadState;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState
{
    WBReader *mReader;
    int mCurrentTextType;
    WXReadState *mXmlDocumentState;
}

- (void).cxx_destruct;
@property(nonatomic) int currentTextType; // @synthesize currentTextType=mCurrentTextType;
@property(nonatomic) __weak WBReader *reader; // @synthesize reader=mReader;
- (id)xmlDrawingState;
- (id)initWithClient:(Class)arg1;

@end

