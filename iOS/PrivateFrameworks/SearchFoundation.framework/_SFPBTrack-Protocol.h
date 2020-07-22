//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBURL;

@protocol _SFPBTrack <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasPlayAction;
@property(retain, nonatomic) _SFPBActionItem *playAction;
@property(readonly, nonatomic) _Bool hasPreview;
@property(retain, nonatomic) _SFPBURL *preview;
@property(readonly, nonatomic) _Bool hasHighlighted;
@property(nonatomic) _Bool highlighted;
@property(readonly, nonatomic) _Bool hasDuration;
@property(copy, nonatomic) NSString *duration;
@property(readonly, nonatomic) _Bool hasNumber;
@property(copy, nonatomic) NSString *number;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
