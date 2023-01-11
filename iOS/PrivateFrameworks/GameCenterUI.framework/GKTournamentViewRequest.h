//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSSecureCoding-Protocol.h>

@class GKTournament, NSString, UIColor;

@interface GKTournamentViewRequest : NSObject <NSSecureCoding>
{
    GKTournament *_tournament;
    long long _playerGroup;
    long long _viewType;
    long long _appearanceStyle;
    UIColor *_tintColor;
    UIColor *_secondaryTintColor;
    NSString *_tournamentDefinitionID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *tournamentDefinitionID; // @synthesize tournamentDefinitionID=_tournamentDefinitionID;
@property(retain, nonatomic) UIColor *secondaryTintColor; // @synthesize secondaryTintColor=_secondaryTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) long long playerGroup; // @synthesize playerGroup=_playerGroup;
@property(retain, nonatomic) GKTournament *tournament; // @synthesize tournament=_tournament;
- (void).cxx_destruct;
- (id)initWithViewType:(long long)arg1 tournamentDefinitionID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
