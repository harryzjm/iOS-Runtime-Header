//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBMediaItemValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(retain, nonatomic) _INPBImageValue *artwork;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

