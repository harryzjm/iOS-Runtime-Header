//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface MSVLyricsSection
{
    long long _songPart;
    NSString *_songPartText;
    NSArray *_lines;
}

+ (long long)_songPartForText:(id)arg1;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(copy, nonatomic) NSString *songPartText; // @synthesize songPartText=_songPartText;
@property(nonatomic) long long songPart; // @synthesize songPart=_songPart;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
