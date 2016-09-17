// copyright The Perfect Game Company 2016

#include "VIM.h"
#include "VLocalPlayer.h"






FString UVLocalPlayer::GetNickname() const
{
	/* Try to fetch a nickname from the online subsystem (eg. Steam) if available */
	FString NickName = Super::GetNickname();

	// Fall back if no nickname was available through the online subsystem.
	if (NickName.IsEmpty())
	{
		const FString Suffix = FString::FromInt(FMath::RandRange(0, 999));
		NickName = FPlatformProcess::ComputerName() + Suffix;
	}

	return NickName;
}
