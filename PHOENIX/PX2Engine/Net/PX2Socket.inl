// PX2Socket.inl

//----------------------------------------------------------------------------
inline SocketImpl* Socket::GetImpl() const
{
	return mImpl;
}
//----------------------------------------------------------------------------
inline px2_socket_t Socket::GetSocket() const
{
	return mImpl->GetSocket();
}
//----------------------------------------------------------------------------